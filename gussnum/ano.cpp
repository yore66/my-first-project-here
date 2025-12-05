    #include<iostream>
    #include<string>

    using namespace std;

    int main(){

        bool found=false;
        string name;

    while (!found)//طالما الشرط متحقق يسوي اللي تحت 
    {
        cout<<"enter youre name:";
        cin>>name;

        if(name == "yara"){
            cout<<"hiii lover";
          found=true;

        }else {
        cout<<"who are u?\n";
        }
        

    }
    return 0;
    }
    