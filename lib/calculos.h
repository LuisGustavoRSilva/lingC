int somaarray(int n[], int qtd){
    int rs = 0;
    int ps;        
    for(ps = 0; ps < qtd ; ps++){
        rs += n[ps];
    }    

    return 0;
}

int mediaarray(int n[], int qtd){
    int rs = 0;
    int ps;        
    for(ps = 0; ps < qtd ; ps++){
        rs += n[ps];
    }    

    return rs/qtd;
}

int maiorvalor(int n[], int qtd){
    int m = n[0];
    int i;
    for(i = 0 ; i < qtd ; i++){
        if(n[i]>m){
            m = n[i];
        }
    }
    return m;
}