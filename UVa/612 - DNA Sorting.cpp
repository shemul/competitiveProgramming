#include <bits/stdc++.h>
using namespace std;

struct DNA {

    int inversion ;
    string dna_name ;

    bool operator < ( const DNA& b ) const {
        return inversion < b.inversion;
    }
};

int main()
{

    int p,q ,r ;
    int M_dataset ;
    cin >> M_dataset ;
    bool blank = false;    for(p =1 ; p <= M_dataset ; p++) {

            vector <DNA> dna_vec ;

            DNA dna;
            int i , j ,x;
            int n_string_size ;
            cin >> n_string_size ;

            int m_iteration ;            cin >> m_iteration ;

            for(x = 0 ; x < m_iteration ; x++) {
                string dna_name ;
                cin >> dna_name;
                string temp_name = dna_name;
                int flag = false ;
                int swap_cnt = 0 ;
                for(i = 0 ; i < n_string_size ; i++) {
                    for(j = 0 ; j < n_string_size -1 ; j++) {
                        if(dna_name[j] > dna_name[j+1]) {
                            swap(dna_name[j] , dna_name[j+1]);
                            flag = true ;
                            swap_cnt= swap_cnt + 1;
                        }
                    }

                    if(flag == false ) {
                        break;
                    }

                }

                dna.inversion = swap_cnt;
                dna.dna_name = temp_name;
                dna_vec.push_back(dna);

            }

        stable_sort(dna_vec.begin() , dna_vec.end() );

        if ( blank ) printf ("\n");
        blank = true;

        for(int i = 0 ; i < dna_vec.size() ; i++) {
            cout << dna_vec[i].dna_name << "\n";
        }
    }

}
