// 统计考试分数
#include <iostream>
using namespace std;

int main()
{
    int scores[3][3] = {
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };

    for(int i=0;i<3;i++)
    {
        int score = 0;
        for(int j=0;j<3;j++)
        {
            cout<<scores[i][j]<< '\t';
            score += scores[i][j];
        }
        cout<<score<<endl;
    }
    return 0;
}