#include <iostream>
#include <windows.h>
#include <MMsystem.h>

using namespace std;

int main() {
    char key;

    while (true) {
        cout << "Simple Piano\n";
        cout << "Press keys (a, b, d, f, g, h, j, k, l, m, n, s, v) to play notes, q to quit\n";

        
        cin >> key;

        if (key == 'q' || key == 'Q') {
            break;
        }

        switch (key) {
        case 'a':
            PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Piano\\A.wav"), NULL, SND_SYNC);
            break;
        case 'b':
            PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Piano\\B.wav"), NULL, SND_SYNC);
            break;
        case 'd':
            PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Piano\\D.wav"), NULL, SND_SYNC);
            break;
        case 'f':
            PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Piano\\F.wav"), NULL, SND_SYNC);
            break;
        case 'g':
            PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Piano\\G.wav"), NULL, SND_SYNC);
            break;
        case 'h':
            PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Piano\\H.wav"), NULL, SND_SYNC);
            break;
        case 'j':
            PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Piano\\J.wav"), NULL, SND_SYNC);
            break;
        case 'k':
            PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Piano\\K.wav"), NULL, SND_SYNC);
            break;
        case 'l':
            PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Piano\\L.wav"), NULL, SND_SYNC);
            break;
        case 'm':
            PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Piano\\M.wav"), NULL, SND_SYNC);
            break;
        case 'n':
            PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Piano\\N.wav"), NULL, SND_SYNC);
            break;
        case 's':
            PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Piano\\S.wav"), NULL, SND_SYNC);
            break;
        case 'v':
            PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Piano\\V.wav"), NULL, SND_SYNC);
            break;
        }

        
    }

    return 0;
}
