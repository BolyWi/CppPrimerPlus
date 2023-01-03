#include <cstdio>
#include <iostream>

int main()
{
    using namespace std;
    cout << "This system can generate up to " << TMP_MAX
         << " temporary name of up to " << L_tmpnam
         << " characters.\n";
    char pszName[L_tmpnam] = { '\0' };
    cout << "Here are ten names:\n";
    FILE *fp;
    for (int i = 0; i < 5; i++)
    {
        char* str = tmpnam(pszName);
        fp = fopen(str, "w+");
        fprintf(fp, "Hello world", i);
        fclose(fp);
        cout << pszName << endl;
    }
    system("pause");
    return 0;
}