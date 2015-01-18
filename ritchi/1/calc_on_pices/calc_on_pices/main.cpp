

//include map
#include "map.cpp"

//include had
#include "hed.cpp"

using namespace std;




MAP map = MAP();




int coco = 100;


int main(int argc, char** argv) {
    //cout<<atof("-20");
	//int coco = 200;
	//cout<<coco;
	int co1 = 20;
	{
		//int co1 = 21;
		cout<<co1;
	}
	cout<<co1;
    char c1[MAXARGS];
    char c;
    double op = 0;


    int args[26],nArgs = 0;

    while( (c = getStr(c1)) != EOF ){
        switch(c){
            case '0':
                push( atof(c1) );
                break;
            case '+':
                push( pop() + pop() );
                break;
            case '-':
                op = pop();
                push( pop() - op );
                break;
            case '/':
                op = pop();
                push( pop() / op );
                break;
            case '%':
                op = pop();
                push( (int)op % (int)pop() );
                break;
            case 'p':
                cout<<top();
                break;
            case 'y':
                cout<<pow( pop(),pop() );
              //  cout<<p;
                break;
            case 'i':
                //cout<<pow( pop(),pop() );
                //cout<<top();
              //  cout<<p;
                break;
            case 'c':
                clear();
                break;
            case 'v':
                //if( c >= 'A' && c <= 'Z' ){
                    //cout<<"val='"<<map.getargs(c)<<"'";
                //}
                cout<<map.getargs(c1[0])<<endl;
                break;
            case 0:
                cout<<"Error!";
                //getchar();
                break;
            default:
                /*
                if( c >= 'A' && c <= 'Z' ){
                    cout<<"val='"<<map.getargs(c)<<"'";
                }*/
                break;
        }
    }
    cout<<"\nlast symbols = "<<pop();
    
    //cout<<isdigit('c');
    getchar();
    return 0;
}




int getStr(char c1[]){
    char c,c2 = '_';
    int i = 0, pm = 0;
    char co1[] = "pri";
    char co2[] = "clear";
    char co3[] = "pow";
    char co4[] = "int";
    //cout<<"__1__";
    //isalpha
    while( ( c1[i] = c = getch() ) == ' ' && c == '\t' );
    
    c1[1] = '\0';
   // c2 = getch();
    if(  !isdigit(c) && !isalpha(c)   ){
        if( c == '-' ){
            if( isdigit(c2 = getch()) ){
                c1[++i] = c2;
            }else{
                ungetch(c2);
                return c;
            }
        }else
            return c;
    }
    if( isalpha(c) ){
        /*
         
        if( c >= 'A' && c <= 'Z' ){
            //return map.getargs(c);
            push( map.getargs(c) );
            return '0';
        }
         
         */
        int b = 0;
        //char cur = c;
        char command[10] = "";
        command[b] = c;
        while( ( c = getch() ) != '\0' && isalpha(c) && c != ' ' ){
            command[++b] = c;
        }
        command[++b] = '\0';
        //cout<<"'"<<command<<"'";
        switch( command[0] ){
            case 'p':
                if( memcmp(co1,command,3) == 0 ){
                    return command[0];
                }else if( memcmp(co3,command,3) == 0 ){
                    return 'y';
                }else{
                    //ungetch(command[0]);
                    return 0;
                }
                break;
            case 'c':
                if( memcmp(co2,command,5) == 0 ){
                    return command[0];
                }else{
                    //ungetch(command[0]);
                    return 0;
                }
                break;
            case 'i':
                if( memcmp(co4,command,3) == 0 ){
                    while( ( c = getch() ) == ' ' );
                    map.setargs(c,pop());
                    return command[0];
                }
                break;
            default:
                //ungetch(command[0]);
                
                if( command[0] >= 'A' && command[0] <= 'Z' ){
                    push( map.getargs(command[0]) );
                    c1[0] = command[0];
                    c1[1] = '\0';
                    return 'v';
                }
                /* * */
                return command[0];
                break;
        }
        //return cur;
    }
   // cout<<"otp='"<<c1[i]<<"-'"<<i<<"'-";
   // c1[i++] = c; 
   // c1[i++] = c2;
    if(isdigit(c)){
        while( (c = getch() ) != '\0' && isdigit(c) ){
            c1[++i] = c;
       // cout<<"otp='"<<c1[i]<<"-'"<<i<<"'-";
        }
        if(c == '.'){
            c1[i] = '.';
            while( (c = getch() ) != '\0' && isdigit(c) ){
                c1[++i] = c;
            }
        }
    }
    c1[++i] = '\0';
    //cout<<c;
    if( c != EOF ){
        ungetch( c );
    }
    return '0';
}





bool issome(char c){
    return true;
}

