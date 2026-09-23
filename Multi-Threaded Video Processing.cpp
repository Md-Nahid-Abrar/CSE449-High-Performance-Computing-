#include<iostream>
#include<iomanip>
#include<algorithm>
#include<array> 
#include<bitset> 
#include<cassert> 
#include<cstdint> 
#include<cstring> 
#include<random> 
#include<complex> 
#include<deque>
#include<set>
using namespace std;
// #ifndef ONLINE_JUDGE 
// #include "functions.cpp"
// #endif 
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_cxx;
// using namespace __gnu_pbds;
// template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <class K, class V> using ordered_map = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//cout<< 0b00000010 binary....0x00000010 hexadecimal
//cout<<setprecision(0)<<scientific<<var;
// struct object{
//     int x,y,z; string s;
// }; object p {1,2,3,"abc"}; p.x = 1 p.s = "abc"
// int* get_array(){
//  static int arr[5] = {1,2,3,4,5};
//  return arr;
// } //inside main() int *pointer = get_array();
#define nl "\n"
#define int long long
#define decimal_precision(x) cout<<setprecision(x)<<fixed;
#define debug(x) cout<<"\n"<<__LINE__<<"-> "<<#x<<" = "<<x<<nl;
#define print(x) for (auto i : x) cout<<i<<" ";cout<<nl;
#define print_2d(a,row,col) for (int i = 0; i < row; i++){ for (int j = 0; j < col; j++) cout<<a[i][j]<<" "; cout<<nl;}
#define cin(a) for (auto &i : a) cin>>i;
#define cin_static(arr) for (int i = 0; i < n; i++) cin>>arr[i];
#define cin_2D(arr, rol, col) for (int i = 0; i < row; i++) for (int k = 0; k < col; k++) cin>>arr[i][k];
#define cin_2d(a,row,col) for (int i = 0; i < row; i++) for (int j = 0; j < col; j++) cin>>a[i][j];
//#define show(x) for (auto& [f, s] : x) cout<<f<<" "<<s<<nl;
//#define all(x) x.begin(), x.end()
#define pi 3.141592653589793
#define mod 1000000007
#define INF 1e18
#define yes cout<<"YES"<<nl;
#define no cout<<"NO"<<nl;
using vi = std::vector<int>;

#define clock_start() auto start = std::chrono::high_resolution_clock::now();
#define clock_end() auto end = std::chrono::high_resolution_clock::now(); std::chrono::duration<double> elapsed = end-start;

#include <iostream>
#include <sys/stat.h>
#include <string>
long long getFileSize(const std::string& filename){
    struct stat fileStat;
    if (stat(filename.c_str(), &fileStat) == 0)
        return fileStat.st_size; 
    else 
        return -1;
}

void show_file_sizes(string Input_File_Name, string Output_File_Name){
    long long size1 = getFileSize(Input_File_Name);
    long long size2 = getFileSize(Output_File_Name);
    if (size1 != -1) 
        std::cout<<"Original File Size   = " <<size1 / (1000.0 * 1000.0) << " MB\n";
    if (size2 != -1) 
        std::cout<<"Compressed File Size = " <<size2 / (1000.0 * 1000.0) << " MB\n\n";
}


void no_of_processing_cores(string N_core){
    decimal_precision(2)
    
    string Input_File_Name = "input_video.mp4";
    string Output_File_Name = N_core + ".mp4";
    cout<<"File Name = "<<Input_File_Name<<nl;
    
    string temp1 = "ffmpeg -i ";
    string temp2 = " -c:v libx264 -crf 23 -threads ";
    string s1 = temp1 + Input_File_Name + temp2;
    string s2 = " " + Output_File_Name;
    string terminal_command = s1 + N_core + s2;
    //ffmpeg -i input.mp4 -c:v libx264 -crf 28 -threads 8 output.mp4

    clock_start()
    int result = system(terminal_command.c_str());
    clock_end()
    
    cout<<"-> NO.OF.CORES       = "<<N_core<<nl;
    cout<<"-> Processing Time   = " <<elapsed.count()<<" seconds\n";    
    
    show_file_sizes(Input_File_Name, Output_File_Name);
}

void solve(){
    // no_of_processing_cores("1");
    // no_of_processing_cores("2");
    // no_of_processing_cores("4");
    // no_of_processing_cores("8"); 
    // no_of_processing_cores("16"); 
    // no_of_processing_cores("32"); 
    
    no_of_processing_cores("3");
    no_of_processing_cores("5");
    no_of_processing_cores("7");
    no_of_processing_cores("9"); 
    no_of_processing_cores("15"); 
    no_of_processing_cores("33"); 
 
    
    
}    

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE 
    freopen("INPUT.txt", "r", stdin); 
    freopen("OUTPUT.txt", "w", stdout); 
    #endif 
    int test = 1;     
    //cin>>test;
    while(test--){
        solve();
    }
}











