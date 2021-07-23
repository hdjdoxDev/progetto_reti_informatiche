// File contenente tutte le costanti da includere
#ifndef CONSTH
#define CONSTH

// Lunghezza header messaggio
#define MESS_TYPE_LEN 8
// Attesa dell'ack
#define USEC 15000
// Tentativi per inviare un messaggio
#define ACK_TRIES 10
// Lunghezza di una stringa di data
#define DATE_LEN 10
// Formato di una stringa di data
#define DATE_FORMAT "%04d_%02d_%02d"
// Lunghezza di una stringa di orario
#define TIME_LEN 8
// Formato di una stringa di orario
#define TIME_FORMAT "%02d:%02d:%02d"
// Lunghezza di una stringa di data in input
#define DATE_IN_LEN 10
// Formato di una stringa di data
#define DATE_IN_FORMAT "%02d:%02d:%04d"
// Massimo numero di peer connessi (scelta di progettazione)
#define MAX_CONNECTED_PEERS 100
// Massima lunghezza di un'entry di aggiornamento con header (deriva dal massimo numero di peer connessi)
#define MAX_ENTRY_UPDATE 630
// Stringa di localhost
#define LOCALHOST "127.0.0.1"
// Massima lunghezza di un filename per le entries
#define MAX_FILENAME_LEN 100
// Massima lunghezza di un path
#define MAX_PATH_LEN 100
// Minimo anno per una data della get
#define MIN_YEAR 2021
// Massima lunghezza di un messaggio legato ai lock di get e stop
#define MAX_LOCK_LEN 14
// Massima lunghezza di un messaggio proveniente da stdin per il server
#define MAX_STDIN_S 30
// Massima lunghezza di un comando per il server
#define MAX_COMMAND_S 13
// Massima lunghezza di un messaggio proveniente da stdin per il peer
#define MAX_STDIN_C 40
// Massima lunghezza di un comando per il peer
#define MAX_COMMAND_C 6
// Lunghezza massima messaggio legato all'update delle liste, lato client e lato server
#define MAX_LIST_LEN 40
// Massima lunghezza messaggio contenente il numero di entries giornaliere (per scelta progettuale mai sopra le 7 cifre)
#define MAX_ENTRY_REP 16
// Lunghezza messaggio con header e carattere a identificare il tipo di entry richiesta
#define ENTR_W_TYPE 10
// Massima lunghezza messaggio con header e un dato aggregato (per scelta progettuale mai oltre i miliardi)
#define MAX_SUM_ENTRIES 19
// Lunghezza pacchetto con header e due date, per richiesta dati aggregati passati
#define MAX_PAST_AGGR 30
// Massima ricezione per un socket (uguale a MAX_ENTRY_UPDATE)
#define MAX_SOCKET_RECV 630
// Massima lunghezza messaggio udp
#define MAX_UDP_MSG 630
// Massima lunghezza messaggio tcp
#define MAX_TCP_MSG 630
// Tutte le porte per le receive
#define ALL_PORT -1
// Directory de registri
#define REGISTERS "data"
// Directory entries
#define ENTRIES "entries"
// Directory agglomerati
#define ELABS "elabs"
// Formato del path alle directory dei file dei registri
#define PATH_FORMAT "./%s/%04d/%c/%s/"
// Formato del path ai file dei registri
#define FILE_FORMAT "./%s/%04d/%c/%s/%04d_%02d_%02d.txt"
// Formato del nome dei file dei registri
#define FILENAME_FORMAT "%04d_%02d_%02d.txt"
#endif