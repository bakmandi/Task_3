#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef struct kelas {
    char id[10];
    char tabungan_asuransi[25];
    char jenis_asuransi;
};

typedef struct elmlist *address;

typedef struct elmlist{
    kelas data;
    address next;
};

typedef struct list {
    address first;
};

void createlist(list *l);
void dealokasi(address p);
address alokasi(data x);

void insertfirst(list *l, address p);
void insertlast(list *l, address p);
void insertafter(address q, address p);
void deletefirst(list *l, address p);
void deletelast(list *l, address p);
void deleteafter(address *p);
void printinfo(list l);

#endif // LIST_H_INCLUDED
