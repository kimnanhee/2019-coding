#include <stdio.h>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <time.h>

using namespace std;

//어떤 큐브의 색과 그 때까지의 회전상태를 저장하기 위해 만든 구조체
struct CUBE {char colors[25]; vector<int> turns;};

queue<CUBE> Q;         //검사할 큐브들을 줄을 세워둘 큐 자료구조
map<string, int> M;    //검사한 큐브들을 기록해둘 맵 자료구조

//각 #번호 회전 방향으로 90도 회전시켰을 때 변환되는 위치에 대한 회전표, trans[1][] 는 #1(R) 회전 된 후의 상태 
int trans[7][24] = {
  0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23, //기본(미사용)
  0,9,2,11,4,5,6,7,8,21,10,23,14,12,15,13,3,17,1,19,20,18,22,16, //#1(R) 번 회전 후 변환된 상태 
  0,18,2,16,4,5,6,7,8,1,10,3,13,15,12,14,23,17,21,19,20,9,22,11, //... #2(R') ...
  2,0,3,1,8,9,6,7,12,13,10,11,16,17,14,15,4,5,18,19,20,21,22,23, //... #3(B) ...
  1,3,0,2,16,17,6,7,4,5,10,11,8,9,14,15,12,13,18,19,20,21,22,23, //... #4(B') ...
  13,15,2,3,1,5,0,7,8,9,10,11,12,23,14,22,18,16,19,17,20,21,4,6, //... #5(D) ...
  6,4,2,3,22,5,23,7,8,9,10,11,12,0,14,1,17,19,16,18,20,21,15,13  //... #6(D') ...
};

//어떤 큐브 x를 #n번 회전시킨 새로운 큐브를 만들어 가져다 놓음 
CUBE turn(CUBE x, int n)
{
  CUBE t;                            //임시 큐브t 생성 
  
  for(int i=0; i<24; i++)            //큐브x의 색들(#n번 회전 시킨 결과)을 큐브t로 복사함 
    t.colors[i] = x.colors[trans[n][i]];
  t.colors[24] = '\0';               //큐브에 저장되어있는 마지막 색 정보를 삭제; 기본 쓰레기값 삭제 
  
  t.turns = x.turns;                 //(큐브x에 저장되어있던) 회전순서를 큐브t로 복사함
  t.turns.push_back(n);              //복사된 회전 순서의 마지막에, 회전시킨 회전 번호 #n 를 추가함
  
  return t;                          //만들어진 큐브t를 호출했던 위치에 가져다 놓음
}

int cnt = 0;                         //다 맞춰진 큐브를 찾을 때까지 검사한 큐브 갯수 카운팅용 변수 
bool chk(CUBE x)                     //어떤 큐브x가 다 맞춰진 큐브인지 검사하는 함수
{
  cnt++;                             //카운터 +1올리기 
  for(int i=0; i<=2; i++)            //(같은 모서리를 공유하는 0, 1, 2 면) 3면의 색 상태만 검사함(증명이 필요할 수도 있음)
    for(int t=i*4, j=1; j<=3; j++)   //각 면이 모두 같은 색인지 확인
      if(x.colors[t] != x.colors[t+j])//색이 모두 같지 않다면 false(거짓) 리턴 
        return false;
  
  return true;                       //검사한 3면의 색이 모두 같다면, true(참) 리턴
}

//모두 맞춰진 큐브로 만들 수 있는 최단 회전 방법을 검색함(너비우선탐색 알고리즘 사용) 
void bfs()
{
  CUBE t, tt;
  
  while(!Q.empty())                  //(검사해야할)큐브가 큐 자료구조에 남아있다면,
  {
    t = Q.front();                   //큐 자료구조의 가장 앞에 있는 큐브를 가져오고,
    Q.pop();                         //그 큐브를 큐 자료구조에서 삭제하고,
    
    if(chk(t) == true)               //그 큐브가 다 맞춰진 큐브라면?
    {
      printf("Solved! How to rotate \n");
      
      for(int i=0; i<t.turns.size(); i++)//그 큐브가 만들어지기까지 회전시킨 회전 순서를 출력
      {
      	if(t.turns[i]==1)
      		printf("R ");
      	else if(t.turns[i]==2)
      		printf("R' ");
      	else if(t.turns[i]==3)
      		printf("U ");
      	else if(t.turns[i]==4)
      		printf("U' ");
      	else if(t.turns[i]==5)
      		printf("B ");
      	else
      		printf("B' ");
      }
      printf("\n");
      
      return;                        //너비우선탐색 함수 bfs() 중단
    }
    else                             //그 큐브가 다 맞춰진 큐브가 아니라면,
    {
      for(int i=1; i<=6; i++)        //그 큐브를 #1 ~ #6번 회전시켜 새 큐브들을 만들고, 큐 자료구조의 마지막에 줄을 세워넣음 
      {
        tt = turn(t, i);             //#i번 회전시켜 새로운 큐브를 만들고, 
        if(M[tt.colors] != 1)        //그렇게 만든 큐브가 이전에 검사했던 적이 없는 큐브라면,
        {
          M[tt.colors] = 1;          //만들어진 큐브를 맵 자료구조에 (검사했다고)기록하고, 
          Q.push(tt);                //큐 자료구조의 마지막에 줄을 세워넣음
        }
      }
    }
  }
}

int main()
{
  CUBE t;                             //임시 큐브t 생성
  
  printf("222cube colors: ");
  scanf("%s", t.colors);              //222큐브의 현재 색을 순서에 맞춰 입력('g(녹색)''r(빨강색)''w(흰색)''o(오렌지색)''y(노랑색)''b(파랑색)')
  printf("BFS started...\n\n");

  Q.push(t);                          //현재 큐브를 큐 자료구조에 줄 세워 넣음
  M[t.colors] = 1;                    //현재 큐브를 맵 자료구조에 (검사했다고)기록함
  
  clock_t st = clock();               //현재 컴퓨터 클록시간 기록
  bfs();                              //맞추는 방법 찾음
  printf("%.2f(sec)\n", float(clock()-st)/CLOCKS_PER_SEC); //찾을 때까지 걸린 시간(초) 출력
  printf("%d cubes checked!\n", cnt); //찾을 때까지 검사한 큐브 개수 출력

  return 0;
}

/*
   br
   rr
yb ww gg yr
yb #w gg yo  //#:큐브 기 
   oo
   bo    

위와 같은 큐브 입력 예시: brrrybybwwwwggggyryooobo

*/
