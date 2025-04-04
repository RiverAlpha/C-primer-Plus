#include<stdio.h>
#define MONTHS 12

int main(){
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for(index = 0;index<MONTHS;index++){
        printf("Month %-2d has %2d days.\n",index+1,days[index]);
    }
    return 0;
}
/*
Month  1 has 31 days.
Month  2 has 28 days.
Month  3 has 31 days.
Month  4 has 30 days.
Month  5 has 31 days.
Month  6 has 30 days.
Month  7 has 31 days.
Month  8 has 31 days.
Month  9 has 30 days.
Month 10 has 31 days.
Month 11 has 30 days.
Month 12 has 31 days.
PS C:\Users\16414\Desktop\WinterH\C>  & 'c:\Users\16414\.vscode\extensions\ms-vscode.cpptools-1.23.6-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-g3yqljfs.4cb' '--stdout=Microsoft-MIEngine-Out-i5eb4u1t.sw1' '--stderr=Microsoft-MIEngine-Error-vpidmfyv.wgs' '--pid=Microsoft-MIEngine-Pid-gnmddzri.se4' '--dbgExe=D:\LSP\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\gdb.exe' '--interpreter=mi' 
Month 1  has 31 days.
Month 2  has 28 days.
Month 3  has 31 days.
Month 4  has 30 days.
Month 5  has 31 days.
Month 6  has 30 days.
Month 7  has 31 days.
Month 8  has 31 days.
Month 9  has 30 days.
Month 10 has 31 days.
Month 11 has 30 days.
Month 12 has 31 days.
*/