#include <iostream>
#include <list>
#include <memory>
#include <vector>
#include <numeric>

using namespace std;
/*

class Forme{
private:
    int inaltime;

public:
     Forme(){
        cout<<"Const fara parametrii"<<endl;
    }

    Forme(int inaltime){
        this->inaltime = inaltime;
        cout<<this->inaltime<<endl;
        cout<<"Const cu parametrii"<<endl;
    }


    virtual int aria() = 0;
    virtual int perimetru() = 0;
    virtual bool estePatrat() = 0;
    virtual int Test(int x, int y){
        return x+y;
    }

   virtual ~Forme(){
        cout<<"Destructor forme"<<endl;
    }
};

class Dreptunghi: public Forme{
private:
    int lungime;
    int latime;

public:
    Dreptunghi(int lungime = 0, int latime = 0, int inaltime=0):Forme(inaltime){
        setLungime(lungime);
        setLatime(latime);
    }

    void setLungime(int lungime){
        if(lungime >=0){
            this->lungime = lungime;
        }else{
            this->lungime = 0;
        }
    }

    void setLatime(int latime){
        if(latime >= 0){
            this->latime = latime;
        }else{
            this->latime = 0;
        }
    }

    int getLungime(){
        return lungime;
    }

    int getLatime(){
        return latime;
    }

    int aria(){
        return getLungime()*getLatime();
    }

    int perimetru(){
        return 2*(getLungime()+getLatime());
    }

    bool estePatrat(){
        if(getLungime() == getLatime()){
            return true;
        }else{
            return false;
        }
    }

    int Test(int x, int y){
        return x-y;
    }

    ~Dreptunghi(){
        cout<<"Destructor dreptunghi"<<endl;
    }

};

*/

int main() {
    vector<int> nums = {1,2,3};

    int leftSum = 0;
    int rightSum = accumulate(nums.begin(), nums.end(), 0);
    int pivotIndex = 0;

    for(vector<int>::iterator itr=nums.begin(); itr !=nums.end(); itr++){
        rightSum -= *itr;

        if(leftSum == rightSum){

           break;
        }
        pivotIndex++;
        leftSum += *itr;
    }

    if(0 <= pivotIndex && pivotIndex < nums.capacity()){
        cout<<pivotIndex<<endl;
    }else{
        cout<<"-1"<<endl;
    }

}
