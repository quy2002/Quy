int KiemtraSNT(int a){
	int dem=0;
	for(int i<0;i<=n;i++){
		if(n%i==0)
		dem++;
	}
	if(dem==2)
	return true;
	else
	return false;
}

int TimSNT(int n){
	int i=n+1;
	while(KiemtraSNT(i)==false)
	{
		i++;
	}
	printf("%d",i);
}

int Tinhtongmotso(){
	int n,tong=0,m;
    m=n%10;  
    tong=tong+m;  
    n=n/10;
}

Int Tinhcvdttamgiac(){
	int a,b,c,p,s=0;
	p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
}

int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}

int BSCNN(int a, int b) {
    return (a * b) / USCLN(a, b);
}
