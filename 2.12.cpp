#include <iostream>
using namespace std;
//一个事件
struct Node
{
    int starttime;
    int endtime;
    int flag;
};
int main()
{
    Node node[30];
    int num;
    cin>>num;
    for(int i=0;i<num;i++)//输入每个节目的开始时间和截止时间 
    {
        cin>>node[i].starttime;
        cin>>node[i].endtime;
        node[i].flag=0;
    }
    int endif;
    cin>>endif;
    //判断是否结尾以0为标准
    if(endif!=0)
    {
        cout<<"ERROR"<<endl;
        return false;
    }

    if(endif==0)//最后输入为0 
    {
        //除去包含的集合，比如俩个事件是3 7 另一个是2 8那么除去2 8这个事件
        for(int i=0;i<num-1;i++)
        {
            for(int j=i+1;j<num;j++)
            {
                if((node[i].starttime>=node[j].starttime)&&(node[i].endtime<=node[j].endtime))
                {
                    node[j].flag=1;
                }
            }

        }
        int total[24];//表示24个时段
        int sum=0;
        for(int k=0;k<num;k++)
        {
            int flag=0;
            if(node[k].flag==0)
            {
                for(int w=node[k].starttime+1;w<node[k].endtime;w++)
                {
                   if(total[w]==100)
                   {
                       flag=-1;
                   }
                }
                if(flag==0)
                {
                     for(int w=node[k].starttime+1;w<node[k].endtime;w++)
                     {
                         total[w]=100;
                     }
                     //cout<<"k="<<k<<endl;
                     sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
