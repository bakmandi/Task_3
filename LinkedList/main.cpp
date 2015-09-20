#include <iostream>

using namespace std;

int main()
{
    cout<<"Menu Asuransi Kendaraan"<< endl;
    cout<<"1. Insert First"<<endl;
    cout<<"2. Insert After"<<endl;
    cout<<"3. Insert Last"<<endl;
    cout<<"4. Delet First"<<endl;
    cout<<"5. Delete After"<<endl;
    cout<<"6. Delete Last"<<endl;
    char plh;
    cin>>plh;
    if (plh=='1'){
        insertfirst(l,p);
    }
    if (plh=='2'){
        insertafter(q,p);
    }
    if (plh=='3'){
        insertlast(l,p);
    }
    if (plh=='4'){
        deletefirst(l,p);
    }
    if (plh=='5'){
        deleteafter(q,p);
    }
    if (plh=='6'){
        deletelast(l,p);
    };

    getch();
}
