void precise(float a, float b) {
   float result= a / b;
   cout<<setprecision(6)<<result<<" ";
   cout<<fixed<<setprecision(3)<<result<<endl;
}