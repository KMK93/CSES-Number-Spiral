#include <iostream>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long t; std::cin >> t;
    while(t--){
        long long r,c; std::cin >> r >> c;
        long long corner = (r*r)-(r-1);
        if(r==c){
            std::cout << corner << '\n';
            continue;
        }
        if(r%2==0){
            if(c<r){
                std::cout << corner+(r-c) << '\n';
                continue;
            } else if (c>r){
                corner = (c*c)-(c-1);
                if(c%2==0){
                    std::cout << corner-(c-r) << '\n';
                    continue;
                } else if (c%2==1){
                    std::cout << corner+(c-r) << '\n';
                    continue;
                }
            }
        }
        else if(r%2==1){
            if(c<r){
                std::cout << corner-(r-c) << '\n';
                continue;
            } else if (c>r){
                corner = (c*c)-(c-1);
                if(c%2==0){
                    std::cout << corner-(c-r) << '\n';
                    continue;
                } else if(c%2==1){
                    std::cout << corner+(c-r) << '\n';
                    continue;
                }
            }
        }
    }
}
