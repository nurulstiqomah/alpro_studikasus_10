#include<iostream>
#include<string>
using namespace std;

class lomba{
	private :
		string kd[10];
		int nim[10];
		int jumlah;
		public:
	void input(){
	cout<<"====================================="<<endl;
	cout<<endl;
	cout<<"jumlah mahasiswa lolos : ";cin>>jumlah;
	
	 
	 for(int i=0;i<jumlah;i++){
	 	cout<<endl;
	 	cout<<"masukan peserta ke "<<i<<endl;
	 	cout<<"masukan nama :";cin>>kd[i];
	 	cout<<"masukan nim  :";cin>>nim[i];
	 	
	 }
    
	}

void proses(){
  std::string *siswa=new std::string[jumlah];
	string *kd=new string;
	int *nim=new int;
}
void output(){
  cout<<"menampilkan data keseluruhan"<<endl;
  
  for(int j=0;j<jumlah;j++){
    cout<<"data ke "<<j+1<<endl;
    cout<<"==================================="<<endl;
    cout<<"nama :"<<kd[j]<<endl;
    cout<<"nim  :"<<nim[j]<<endl;
    cout<<"===================================="<<endl;
  }
}
};
int main(){
	lomba a;
	a.input();
	a.proses();
	a.output();
}