echo "# Study-Material" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/a0095427/Study-Material.git
git push -u origin main


#include <stdio.h>

int main() {

    printf("符合條件的密碼組合：\n");


    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (j == i) continue; 
            for (int k = 1; k <= 9; k++) {
                if (k == i || k == j) continue;  
                for (int l = 1; l <= 9; l++) {
                    if (l == i || l == j || l == k) continue;  
                    
                    
                    if (i + j + k + l == 18) {
                        printf("%d%d%d%d\n", i, j, k, l);
                    }
                }
            }
        }
    }
    
    return 0;
}
