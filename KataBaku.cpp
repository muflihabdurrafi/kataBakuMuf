#include <iostream>
#include <conio.h> //untuk getch()
#include <time.h> //untuk srand(time(null))
 
using namespace std;

void katabaku (int &betul, int &salah);

int main(){
    int jawaban, random;
    double persenBetul, persenSalah, totalSoal;
    char pilihan;
    srand(time(NULL));
    //Halaman Utama
    halamanutama:
    system("cls");
    cout << "===================================================" << endl;
    cout << "              Aplikasi Kuis Kata Baku" << endl;
    cout << "              |Dirancang oleh Muflih|" << endl;
    cout << "===================================================" << endl;
    cout << "Kuis ini akan menguji pengetahuan kata baku anda!" << endl;
    cout << "Tekan 1 untuk memulai kuis" << endl;
    cout << "Tekan 2 untuk melihat petunjuk kuis" << endl;
    cout << "Tekan 3 untuk mengakhiri kuis" << endl;
    pilihan=getch();
    if (pilihan=='1'){
        //Halaman Kuis
        system ("cls");
        int betul = 0;
        int salah = 0;
        cout << "===============|Selamat Mengerjakan|===============" << endl;
        cout << "Jawab kuis ini dengan mengetik kata yang baku!" << endl;
        for(int i=1;i<=20;i++){
            cout << "\n" << i << ". ";
            katabaku(betul, salah);
        }
        cout << "===================================================" << endl;
        cout << "Jumlah betul: " << betul << endl;
        cout << "Jumlah salah: " << salah << endl;

        totalSoal=betul+salah;
        cout << "Jumlah soal ada: " << totalSoal << endl;
        persenBetul=((totalSoal-salah)/totalSoal)*100;
        cout << "Persentase betul: " << persenBetul << "%" << endl;
        persenSalah=((totalSoal-betul)/totalSoal)*100;
        cout << "Persentase salah: " << persenSalah << "%" << endl;
        cout << "===================================================" << endl;
        cout << "\nTekan tombol apapun untuk kembali ke menu utama" << endl;
        getch();
        goto halamanutama;
    } else if (pilihan=='2'){
        //Halaman Petunjuk Kuis
        system ("cls");
        cout << "=================|Petunjuk Kuis|===================" << endl;
        cout << "1. Kuis ini akan memberikan 20 soal dari 202 soal" << endl; 
        cout << "   yang tersedia secara acak." << endl;
        cout << "2. Jawablah pertanyaan dengan mengetik kata yang" << endl;
        cout << "   baku!" << endl;
        cout << "3. Pengecekan jawaban CASE SENSITIVE." << endl;
        cout << "4. Semua jawaban berdasarkan KBBI" << endl;
        cout << "===================================================" << endl;
        cout << "\nTekan tombol apapun untuk kembali ke menu utama" << endl;
        
        getch();
        goto halamanutama;
    } else if (pilihan=='3'){
        //Mengakhiri Kuis
        system ("cls");
    }

    return 0;
}

void katabaku (int &betul, int &salah){
    string katabaku, tidakBaku, jawaban;
    int pertanyaan[201]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
    21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,
    45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,
    69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,
    93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,
    113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,
    131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,
    149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,
    167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,
    185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201};
    int a=(rand()%201); //untuk mengacak pertanyaan

    switch (pertanyaan[a]){
        case 1:
            katabaku = "dolar";
            tidakBaku = "dollar";
            break;
        case 2:
            katabaku = "atlet";
            tidakBaku = "atlit";

            break;
        case 3:
            katabaku = "sari pati";
            tidakBaku = "saripati";

            break;
        case 4:
            katabaku = "kesatria";
            tidakBaku = "ksatria";
            break;
        case 5:
            katabaku = "bujet";
            tidakBaku = "bajet";
            break;
        case 6:
            katabaku = "video";
            tidakBaku = "vidio";
            break;
        case 7:
            katabaku = "cendera mata";
            tidakBaku = "cindera mata";
            break;
        case 8:
            katabaku = "meterai";
            tidakBaku = "materai";
            break;
        case 9:
            katabaku = "standardisasi";
            tidakBaku = "standarisasi";
            break;
        case 10:
            katabaku = "memperoleh";
            tidakBaku = "memeroleh";
            break;
        case 11:
            katabaku = "sekadar";
            tidakBaku = "sekedar";
            break;
        case 12:
            katabaku = "nasihat";
            tidakBaku = "nasehat";
            break;
        case 13:
            katabaku = "memopulerkan";
            tidakBaku = "mempopulerkan";
            break;
        case 14:
            katabaku = "nomor";
            tidakBaku = "nomer";
            break;
        case 15:
            katabaku = "hadis";
            tidakBaku = "hadist";
            break;
        case 16:
            katabaku = "seriawan";
            tidakBaku = "sariawan";
            break;
        case 17:
            katabaku = "berengsek";
            tidakBaku = "brengsek";
            break;
        case 18:
            katabaku = "yoghurt";
            tidakBaku = "yogurt";
            break;
        case 19:
            katabaku = "telanjur";
            tidakBaku = "terlanjur";
            break;
        case 20:
            katabaku = "moto";
            tidakBaku = "motto";
            break;
        case 21:
            katabaku = "legalisasi";
            tidakBaku = "legalisir";
            break;
        case 22:
            katabaku = "organisasi";
            tidakBaku = "organisir";
            break;
        case 23:
            katabaku = "afkir";
            tidakBaku = "apkir";
            break;
        case 24:
            katabaku = "amendemen";
            tidakBaku = "amandemen";
            break;
        case 25:
            katabaku = "anjlok";
            tidakBaku = "anjlog";
            break;
        case 26:
            katabaku = "otobus";
            tidakBaku = "autobus";
            break;
        case 27:
            katabaku = "otomat";
            tidakBaku = "automat";
            break;
        case 28:
            katabaku = "banderol";
            tidakBaku = "bandrol";
            break;
        case 29:
            katabaku = "barel";
            tidakBaku = "barrel";
            break;
        case 30:
            katabaku = "batu bara";
            tidakBaku = "batubara";
            break;
        case 31:
            katabaku = "biarpun";
            tidakBaku = "biar pun";
            break;
        case 32:
            katabaku = "berahi";
            tidakBaku = "birahi";
            break;
        case 33:
            katabaku = "biliun";
            tidakBaku = "bilyun";
            break;
        case 34:
            katabaku = "buddha";
            tidakBaku = "budha";
            break;
        case 35:
            katabaku = "budi daya";
            tidakBaku = "budidaya";
            break;
        case 36:
            katabaku = "karisma";
            tidakBaku = "kharisma";
            break;
        case 37:
            katabaku = "cengkih";
            tidakBaku = "cengkeh";
            break;
        case 38:
            katabaku = "cecak";
            tidakBaku = "cicak";
            break;
        case 39:
            katabaku = "sontek";
            tidakBaku = "contek";
            break;
        case 40:
            katabaku = "daripada";
            tidakBaku = "dari pada";
            break;
        case 41:
            katabaku = "dekret";
            tidakBaku = "dekrit";
            break;
        case 42:
            katabaku = "diskotek";
            tidakBaku = "diskotik";
            break;
        case 43:
            katabaku = "detail";
            tidakBaku = "detil";
            break;
        case 44:
            katabaku = "draf";
            tidakBaku = "draff";
            break;
        case 45:
            katabaku = "dukacita";
            tidakBaku = "duka cita";
            break;
        case 46:
            katabaku = "elite";
            tidakBaku = "elit";
            break;
        case 47:
            katabaku = "entri";
            tidakBaku = "entre";
            break;
        case 48:
            katabaku = "faks";
            tidakBaku = "fax";
            break;
        case 49:
            katabaku = "energik";
            tidakBaku = "enerjik";
            break;
        case 50:
            katabaku = "genting";
            tidakBaku = "genteng";
            break;
        case 51:
            katabaku = "guncang";
            tidakBaku = "goncang";
            break;
        case 52:
            katabaku = "gereget";
            tidakBaku = "greget";
            break;
        case 53:
            katabaku = "gubuk";
            tidakBaku = "gubug";
            break;
        case 54:
            katabaku = "gudeg";
            tidakBaku = "gudek";
            break;
        case 55:
            katabaku = "guram";
            tidakBaku = "gurem";
            break;
        case 56:
            katabaku = "adang";
            tidakBaku = "hadang";
            break;
        case 57:
            katabaku = "mengandang";
            tidakBaku = "menghadang";
            break;
        case 58:
            katabaku = "hakikat";
            tidakBaku = "hakekat";
            break;
        case 59:
            katabaku = "halalbihalal";
            tidakBaku = "halal bil halal";
            break;
        case 60:
            katabaku = "andal";
            tidakBaku = "handal";
            break;
        case 61:
            katabaku = "hektare";
            tidakBaku = "hektar";
            break;
        case 62:
            katabaku = "embus";
            tidakBaku = "hembus";
            break;
        case 63:
            katabaku = "empas";
            tidakBaku = "hempas";
            break;
        case 64:
            katabaku = "entak";
            tidakBaku = "hentak";
            break;
        case 65:
            katabaku = "kacamata";
            tidakBaku = "kaca mata";
            break;
        case 66:
            katabaku = "gender";
            tidakBaku = "jender";
            break;
        case 67:
            katabaku = "jemaah";
            tidakBaku = "jamaah";
            break;
        case 68:
            katabaku = "khatulistiwa";
            tidakBaku = "katulistiwa";
            break;
        case 69:
            katabaku = "prestise";
            tidakBaku = "prestisi";
            break;
        case 70:
            katabaku = "andal";
            tidakBaku = "handal";
            break;
        case 71:
            katabaku = "impit";
            tidakBaku = "himpit";
            break;
        case 72:
            katabaku = "isap";
            tidakBaku = "hisap";
            break;
        case 73:
            katabaku = "unjuk";
            tidakBaku = "hunjuk";
            break;
        case 74:
            katabaku = "utang";
            tidakBaku = "hutang";
            break;
        case 75:
            katabaku = "ibu kota";
            tidakBaku = "ibukota";
            break;
        case 76:
            katabaku = "Idulfitri";
            tidakBaku = "Idul Fitri";
            break;
        case 77:
            katabaku = "indra";
            tidakBaku = "indera";
            break;
        case 78:
            katabaku = "interviu";
            tidakBaku = "interview";
            break;
        case 79:
            katabaku = "iktikad";
            tidakBaku = "itikad";
            break;
        case 80:
            katabaku = "jeriken";
            tidakBaku = "jerigen";
            break;
        case 81:
            katabaku = "ziarah";
            tidakBaku = "jiarah";
            break;
        case 82:
            katabaku = "kedaluwarsa";
            tidakBaku = "kadaluwarsa";
            break;
        case 83:
            katabaku = "kalaupun";
            tidakBaku = "kalau pun";
            break;
        case 84:
            katabaku = "kaveling";
            tidakBaku = "kavling";
            break;
        case 85:
            katabaku = "kendur";
            tidakBaku = "kendor";
            break;
        case 86:
            katabaku = "klimaks";
            tidakBaku = "klimak";
            break;
        case 87:
            katabaku = "komoditas";
            tidakBaku = "komoditi";
            break;
        case 88:
            katabaku = "komplet";
            tidakBaku = "komplit";
            break;
        case 89:
            katabaku = "kokaina";
            tidakBaku = "kokain";
            break;
        case 90:
            katabaku = "lanskap";
            tidakBaku = "landskap";
            break;
        case 91:
            katabaku = "lubang";
            tidakBaku = "lobang";
            break;
        case 92:
            katabaku = "massal";
            tidakBaku = "masal";
            break;
        case 93:
            katabaku = "masjid";
            tidakBaku = "mesjid";
            break;
        case 94:
            katabaku = "musala";
            tidakBaku = "mushola";
            break;
        case 95:
            katabaku = "tampak";
            tidakBaku = "nampak";
            break;
        case 96:
            katabaku = "nekat";
            tidakBaku = "nekad";
            break;
        case 97:
            katabaku = "nonformal";
            tidakBaku = "non formal";
            break;
        case 98:
            katabaku = "omzet";
            tidakBaku = "omset";
            break;
        case 99:
            katabaku = "orisinal";
            tidakBaku = "orisinil";
            break;
        case 100:
            katabaku = "pemungkas";
            tidakBaku = "pamungkas";
            break;
        case 101:
            katabaku = "pascaoperasi";
            tidakBaku = "pasca operasi";
            break;
        case 102:
            katabaku = "pascapanen";
            tidakBaku = "pasca panen";

            break;
        case 103:
            katabaku = "pascasarjana";
            tidakBaku = "pasca sarjana";

            break;
        case 104:
            katabaku = "prangko";
            tidakBaku = "perangko";
            break;
        case 105:
            katabaku = "problem";
            tidakBaku = "problema";
            break;
        case 106:
            katabaku = "reumatik";
            tidakBaku = "rematik";
            break;
        case 107:
            katabaku = "renten";
            tidakBaku = "rente";
            break;
        case 108:
            katabaku = "risiko";
            tidakBaku = "resiko";
            break;
        case 109:
            katabaku = "reyot";
            tidakBaku = "reot";
            break;
        case 110:
            katabaku = "roboh";
            tidakBaku = "rubuh";
            break;
        case 111:
            katabaku = "salat";
            tidakBaku = "shalat";
            break;
        case 112:
            katabaku = "silakan";
            tidakBaku = "silahkan";
            break;
        case 113:
            katabaku = "sukacita";
            tidakBaku = "suka cita";
            break;
        case 114:
            katabaku = "sukarela";
            tidakBaku = "suka rela";
            break;
        case 115:
            katabaku = "sungguhpun";
            tidakBaku = "sungguh pun";
            break;
        case 116:
            katabaku = "takhayul";
            tidakBaku = "tahayul";
            break;
        case 117:
            katabaku = "teknokrat";
            tidakBaku = "tehnokrat";
            break;
        case 118:
            katabaku = "tangki";
            tidakBaku = "tengki";
            break;
        case 119:
            katabaku = "tecermin";
            tidakBaku = "tercermin";
            break;
        case 120:
            katabaku = "telantar";
            tidakBaku = "terlantar";
            break;
        case 121:
            katabaku = "tepercaya";
            tidakBaku = "terpercaya";
            break;
        case 122:
            katabaku = "tepercik";
            tidakBaku = "terpercik";
            break;
        case 123:
            katabaku = "teperdaya";
            tidakBaku = "terperdaya";
            break;
        case 124:
            katabaku = "terap";
            tidakBaku = "trap";
            break;
        case 125:
            katabaku = "uzur";
            tidakBaku = "udzur";
            break;
        case 126:
            katabaku = "ustaz";
            tidakBaku = "ustad";
            break;
        case 127:
            katabaku = "voucer";
            tidakBaku = "voucher";
            break;
        case 128:
            katabaku = "beker";
            tidakBaku = "weker";
            break;
        case 129:
            katabaku = "menoleransi";
            tidakBaku = "mentolerir";
            break;
        case 130:
            katabaku = "terampil";
            tidakBaku = "trampil";
            break;
        case 131:
            katabaku = "tribun";
            tidakBaku = "tribune";
            break;
        case 132:
            katabaku = "triliun";
            tidakBaku = "trilyun";
            break;
        case 133:
            katabaku = "trotoar";
            tidakBaku = "trotoir";
            break;
        case 134:
            katabaku = "menyukseskan";
            tidakBaku = "mensukseskan";
            break;
        case 135:
            katabaku = "syukur";
            tidakBaku = "sukur";
            break;
        case 136:
            katabaku = "survei";
            tidakBaku = "survai";
            break;
        case 137:
            katabaku = "swasta";
            tidakBaku = "suasta";
            break;
        case 138:
            katabaku = "saksama";
            tidakBaku = "seksama";
            break;
        case 139:
            katabaku = "roh";
            tidakBaku = "ruh";
            break;
        case 140:
            katabaku = "rohani";
            tidakBaku = "ruhani";
            break;
        case 141:
            katabaku = "risi";
            tidakBaku = "risih";
            break;
        case 142:
            katabaku = "respons";
            tidakBaku = "respon";
            break;
        case 143:
            katabaku = "ubah";
            tidakBaku = "rubah";
            break;
        case 144:
            katabaku = "religi";
            tidakBaku = "reliji";
            break;
        case 145:
            katabaku = "rezeki";
            tidakBaku = "rejeki";
            break;
        case 146:
            katabaku = "rapor";
            tidakBaku = "raport";
            break;
        case 147:
            katabaku = "rapi";
            tidakBaku = "rapih";
            break;
        case 148:
            katabaku = "Al-Qur'an";
            tidakBaku = "alquran";
            break;
        case 149:
            katabaku = "putri";
            tidakBaku = "puteri";
            break;
        case 150:
            katabaku = "putra";
            tidakBaku = "putera";
            break;
        case 151:
            katabaku = "purnajual";
            tidakBaku = "purna jual";
            break;
        case 152:
            katabaku = "produktivitas";
            tidakBaku = "produktifitas";
            break;
        case 153:
            katabaku = "memproduksi";
            tidakBaku = "memeroduksi";
            break;
        case 154:
            katabaku = "praktik";
            tidakBaku = "praktek";
            break;
        case 155:
            katabaku = "memesona";
            tidakBaku = "mempesona";
            break;
        case 156:
            katabaku = "autopsi";
            tidakBaku = "otopsi";
            break;
        case 157:
            katabaku = "autoaktivitas";
            tidakBaku = "otoaktivitas";
            break;
        case 158:
            katabaku = "autodidak";
            tidakBaku = "otodidak";
            break;
        case 159:
            katabaku = "autokritik";
            tidakBaku = "otokritik";
            break;
        case 160:
            katabaku = "opelet";
            tidakBaku = "oplet";
            break;
        case 161:
            katabaku = "unta";
            tidakBaku = "onta";
            break;
        case 162:
            katabaku = "negeri";
            tidakBaku = "negri";
            break;
        case 163:
            katabaku = "napas";
            tidakBaku = "nafas";
            break;
        case 164:
            katabaku = "mutakhir";
            tidakBaku = "mutahir";
            break;
        case 165:
            katabaku = "miliar";
            tidakBaku = "milyar";
            break;
        case 166:
            katabaku = "menceret";
            tidakBaku = "mencret";
            break;
        case 167:
            katabaku = "masyhur";
            tidakBaku = "mashur";
            break;
        case 168:
            katabaku = "manajemen";
            tidakBaku = "managemen";
            break;
        case 169:
            katabaku = "miliuner";
            tidakBaku = "milyuner";
            break;
        case 170:
            katabaku = "mukjizat";
            tidakBaku = "mu'jizat";
            break;
        case 171:
            katabaku = "mubalig";
            tidakBaku = "mubaligh";
            break;
        case 172:
            katabaku = "kuitansi";
            tidakBaku = "kwitansi";
            break;
        case 173:
            katabaku = "khawatir";
            tidakBaku = "kuatir";
            break;
        case 174:
            katabaku = "kreativitas";
            tidakBaku = "kreatifitas";
            break;
        case 175:
            katabaku = "konteks";
            tidakBaku = "kontek";
            break;
        case 176:
            katabaku = "koordinasi";
            tidakBaku = "koordinir";
            break;
        case 177:
            katabaku = "konkret";
            tidakBaku = "konkrit";
            break;
        case 178:
            katabaku = "kongres";
            tidakBaku = "konggres";
            break;
        case 179:
            katabaku = "konduite";
            tidakBaku = "kondite";
            break;
        case 180:
            katabaku = "kompleks";
            tidakBaku = "komplek";
            break;
        case 181:
            katabaku = "karier";
            tidakBaku = "karir";
            break;
        case 182:
            katabaku = "jenderal";
            tidakBaku = "jendral";
            break;
        case 183:
            katabaku = "zaman";
            tidakBaku = "jaman";
            break;
        case 184:
            katabaku = "jahil";
            tidakBaku = "jail";
            break;
        case 185:
            katabaku = "istri";
            tidakBaku = "isteri";
            break;
        case 186:
            katabaku = "isyarat";
            tidakBaku = "isarat";
            break;
        case 187:
            katabaku = "inteligen";
            tidakBaku = "intelijen";
            break;
        case 188:
            katabaku = "hierarki";
            tidakBaku = "hirarki";
            break;
        case 189:
            katabaku = "khalayak";
            tidakBaku = "halayak";
            break;
        case 190:
            katabaku = "filsuf";
            tidakBaku = "filosof";
            break;
        case 191:
            katabaku = "esai";
            tidakBaku = "esay";
            break;
        case 192:
            katabaku = "detergen";
            tidakBaku = "deterjen";
            break;
        case 193:
            katabaku = "cedera";
            tidakBaku = "cidera";
            break;
        case 194:
            katabaku = "bus";
            tidakBaku = "bis";
            break;
        case 195:
            katabaku = "bineka";
            tidakBaku = "bhinneka";
            break;
        case 196:
            katabaku = "barangkali";
            tidakBaku = "barang kali";
            break;
        case 197:
            katabaku = "apoteker";
            tidakBaku = "apotiker";
            break;
        case 198:
            katabaku = "ambulans";
            tidakBaku = "ambulan";
            break;
        case 199:
            katabaku = "aktivitas";
            tidakBaku = "aktifitas";
            break;
        case 200:
            katabaku = "akta";
            tidakBaku = "akte";
            break;
        case 201:
            katabaku = "terima kasih";
            tidakBaku = "terimakasih";
            break;
        default:
            katabaku = "lembap";
            tidakBaku = "lembab";
            break;
    }
    int random[2]={0,1}, b=(rand()%2); //untuk mengacak posisi katabaku dan tidakbaku
    switch (random[b]){
        case 1:
            cout << "Pilih yang baku! \"" << tidakBaku << "\" atau \"" << katabaku << "\"?" << endl;
            break;
        default:
            cout << "Pilih yang baku! \"" << katabaku << "\" atau \"" << tidakBaku << "\"?" << endl;
            break;
    }
    cout << "Jawaban: ";
    getline(cin, jawaban);
    if (jawaban==katabaku){
        cout << "Betul! Yang baku adalah \"" << katabaku << "\"\n";
        betul++;
    } else {
        cout << "Salah! Yang baku adalah \"" << katabaku << "\"\n";
        salah++;
    }
}
