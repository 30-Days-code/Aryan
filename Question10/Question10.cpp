#include<fstream>
#include<iostream>
#include<cstring>
using namespace std;

void CountUpcase()  // A function to count number of uppercase alphabets in a file
{
    ifstream fin("ARTICLE.TXT");
    
    int count = 0;
    char ch;
    
    while(!fin.eof())
    { 
        fin>>ch;
        if(isupper(ch))
        count++;
    }
    
    cout<<"\n Uppercase Alphabets are : "<<count;
    
    fin.close();
}

void COUNT()  // A function to count number of "to" and "the" in a file 
{
    ifstream File;
    File.open("ARTICLE.TXT");
    
    char Word[100] ;
    int C1 = 0, C2 = 0;
    
    while(!File.eof())
    {
        File>>Word;
        
        if( strcasecmp(Word,"to") == 0 )
        C1++;
        
        else if( strcasecmp(Word,"the") == 0 )
        C2++;
    }
    
    cout<<"\n Number of 'to' in file : "<<C1;
    cout<<"\n Number of 'the' in file : "<<C2;
    
    File.close(); 
}

void CountWords() // A function to count all the number of words in a file
{
    char c[100],ch;
    
    int count=0;
    
    ifstream file("ARTICLE.TXT");
    
    while(!file.eof())
    { 
        file>>c;
        count++;
    }
    
    cout<<"\n Number of words are : "<<count;
    
    file.close();
}

void CountChar() // A function to count all the number of characters in a file
{
    char ch;
    
    int count=0;
    
    ifstream file("ARTICLE.TXT");
    
    while(!file.eof())
    { 
        file.get(ch);
        count++;
    }
    
    cout<<"\n Number of characters are : "<<count;
    
    file.close();
}

void CopyText() // A function which copies a file into another file 
{
    char ch;
    
    ifstream in_stream;
    ofstream out_stream;
    
    in_stream.open("ARTICLE.TXT");
    out_stream.open("COPY.TXT");    // This will create a new file 
    
    while (!in_stream.eof())
    {
        ch = (char)in_stream.get();
        
        out_stream<<ch;
    }
    
    cout<<"\n File Copied Successfully !!! ";
    
    in_stream.close();
    out_stream.close();
}

int main()
{
    CountUpcase();
    COUNT();
    CountWords();
    CountChar();
    CopyText();
    
    return 0;
}