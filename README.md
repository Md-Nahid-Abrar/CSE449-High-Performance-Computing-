<img width="550" height="544" alt="aa" src="https://github.com/user-attachments/assets/b5fea683-1ca5-4e6e-89f2-61bab0642549" />


```cpp
void solve(){
    
    no_of_processing_cores("1");
    no_of_processing_cores("2");
    no_of_processing_cores("4");
    no_of_processing_cores("8"); 
    no_of_processing_cores("16"); 
    no_of_processing_cores("32"); 
    
}    
```

```cpp
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
```

<img width="907" height="411" alt="Screenshot 2026-09-24 at 12 50 43 AM" src="https://github.com/user-attachments/assets/91b635ab-f9ec-4e98-85af-96f3dba5646b" />
