#include <iostream>
#include <list>
using namespace std;

class dreptunghi{
private:
    int lungime;
    int latime;
    const list<dreptunghi> list_dp;
    dreptunghi d;

public:
    dreptunghi(int lungime, int latime) : lungime(lungime), latime(latime) {
        list_dp.push_back( );

    }

    const list<dreptunghi> createList(dreptunghi d){
        list_dp.push_back(d);
        cout<<"Object is inserted"<<endl;
        return list_dp;
    }

    friend ostream& operator << (ostream& os, const dreptunghi& dp);

    void showObject(){
        list<dreptunghi> ls = getListDp();
        for(list<dreptunghi>::iterator itr = ls.begin(); itr != ls.end(); itr++){
            cout<<*itr<<endl;
        }
    }

    const list<dreptunghi> &getListDp() const;


};

ostream& operator << (ostream& os, const dreptunghi& dp)
{
    os << dp.lungime << '/' << dp.latime;
    return os;
}

const list<dreptunghi> &dreptunghi::getListDp() const {
    return list_dp;
}

int main() {
    bool flag = true;

    while (flag) {
        cout << "Select a option!" << endl;
        cout << "Press 1 for inserting a element!" << endl;
        cout << "Press 2 for show list of elemetns!" << endl;
        cout << "Press 3 for exit the program!" << endl;
        int a;
        cin >> a;
        if (a == 1) {
            dreptunghi *d1 = new dreptunghi(10, 20);
            dreptunghi *d2 = new dreptunghi(50, 10);
            d1->createList(*d1);
            d2->createList(*d2);
            d2->showObject();
        } else if (a == 2) {
            dreptunghi *show = new dreptunghi(0, 0);
            show->showObject();
        } else if (a == 3) {
            flag = false;
        }else{
            cout<<"Invalid option!"<<endl;
        }


    }

    return 0;
}
