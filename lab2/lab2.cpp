#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;
int main()
{	
	int tot=0;
	int swi=0;
	int p=0;
	int cas=0;
	int q=0;
	int y=0;
	string keyword[32]={"auto","break","case","char","const","continue","default","double","do","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
	string keyword1[]={"switch"};
	string keyword2[]={"case"}; 
	ifstream infile;
	infile.open("lab2.txt");
	for (int i = 0; i < 40; i++) {
		string data;
		getline(infile, data);
		istringstream str(data);
		string tempo;
			while(getline(fly,zoom,'(')) {//���ı��еģ����� 
				stringstream big(zoom);
				string huge;
				while(getline(big,huge,'{')){//���ı��е�{���� 
					stringstream mouse(huge);
					string cat;
					while(getline(mouse,cat,';')){//���ı��еģ����� 
						stringstream eye(cat);
						string nose;
						while(getline(eye,nose,':')){//���ı��еģ����� 
							for( p=0;p<32;p++){//�����ܵĹؼ������� 
								if(nose==keyword[p]){
									tot+=1;
								}		
								else{
									tot +=0;
								}
							}
							if(nose==keyword1[0]&&q==1){
								y=cas;
							}
							if(nose==keyword1[0]){//�����ܵ�switch������ 
								swi+=1;
								q+=1;
							}
							else{
								swi+=0;
							}
							if(nose==keyword2[0]){//�����ܵ�case������ 
								cas+=1;
							}
						}
					}			
				}
			}
		}
	}
	cas=cas-y;
	cout<<"�ؼ��ֵ��ܵ�������"<<tot<<endl;
	cout<<"switch��������"<<swi<<endl;
	cout<<"case��������"<<""<<y<<cas<<endl;
	return 0;
}

