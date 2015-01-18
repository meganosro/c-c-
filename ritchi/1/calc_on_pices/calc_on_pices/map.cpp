


class MAP{
public:
    MAP(){i = 0;};
    int i;
    int args1[100];
    char args2[100];
    void setargs( char name,int val ){
        //if(i > 0){  
          args2[i] = name;
          args1[i++] = val;
        //}
    }
    int getargs( char c ){
        int j = -1;
        while( args2[++j] != c ){
            
        }
        
        return args1[j];
    }
};

