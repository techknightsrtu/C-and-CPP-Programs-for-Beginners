 /*11111
   2222
    333
     22
      1*/
 
 #include<iostream>
    using namespace std;
    main()
    { int i,j,k,n;
    cout<<"enter the number:";
    cin>>n;
     
     // For Loop
    for(i=1;i<=n;i++)
    {for(j=1;j<i;j++)
    {
	cout<<" ";
	}
	for(k=1;k<=n-i+1;k++)
	{
	cout<<i;
    }cout<<"\n";}
    return(0);
}
