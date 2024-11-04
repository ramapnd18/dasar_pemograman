struct KartuHaji {

    char nama[50];

    int umur;

    char tipeTiket;

};


void ubahTipeTiket(struct KartuHaji *haji, char tipe) {

    haji.tipeTiket = tipe;

}



int main() {

    struct KartuHaji haji1 = {"Thariq", 20, 'C'};

    printf("\n Sebelum: %c\n", haji1.tipeTiket);

    ubahTipeTiket(&haji1, 'A');

    printf(" Sesudah: %c\n", haji1.tipeTiket);

    return 0;

}