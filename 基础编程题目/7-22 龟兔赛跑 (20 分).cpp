#include<iostream>
using namespace std;
int main(){
	int t;
   int rabbit=0,turtle=0,minute,rest=-1,run=10; 
	cin >>t;
	while(t){
		turtle+=3;
		if (run-- > 0)
            rabbit += 9;
        if (run == 0 ){            //������10���ӻ�ͷ��һ�£�������ڹ�����Ϣ30����,��֮����10����
            if (rabbit > turtle)   
            rest = 30;
            else run = 10 ;
        }
        if (rest-- == 0)                    //��Ϣ����������10����
            run = 10;

		
		
	}
	 if(turtle > rabbit)
        printf("@_@ %d",turtle);
    else if (rabbit > turtle)
        printf("^_^ %d",rabbit);
    else 
        printf("-_- %d",rabbit);
 
	
	return 0;
} 
