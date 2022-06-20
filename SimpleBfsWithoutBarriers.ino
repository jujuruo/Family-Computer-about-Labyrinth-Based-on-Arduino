//SimpleBfsWithoutBarriers
#include<CustomQueue.h>
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int Direction[4][2]={1,0,-1,0,0,-1,0,1};
  int Map[8][8];
  for(int i=0; i<=7; i++)
    for(int j=0; j<=7; j++)
      Map[i][j]=0;
  //map[0][0]=1;
  struct c{int x,y,steps;};
  CustomQueue<c> qu;
  c cur,nex;
  cur.x=0;
  cur.y=0;
  cur.steps=0;
  qu.Push(cur);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!qu.Empty)
  {
    cur=qu.Front();
    qu.Pop();
    Map[cur.x][cur.y]=1;//可以在此添加可视化函数
    nex.steps=cur.steps+1;
    for(int i=0; i<=3; i++)
    {
      nex.x=cur.x+Direction[i][0];
      nex.y=cur.y+Direction[i][1];
      if(!Map[nex.x][nex.y]) qu.Push(nex);
    }
    
  }
  else
  {
    while(1)
  }

}
