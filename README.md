Demo submission, Etapa 2:

ID: Margineanu Nicolae-Vladut, 323 CA
Problema: Sortare
Algoritmi alesi: QuickSort, MergeSort, HeapSort.

Contents:
* **algo.h**  
   * Prototipul functiilor generice Quicksort(vector<T> &A), 
 mergesort(T begin, T end, T res), void heapSort(vector<T>& array, size_t size).

* **algo.cpp**
   * Implementarea algoritmului QuickSort. (cea mai buna solutie aleasa). Pentru
 alegerea pivotului am folosit "median-of-three". O alta alegere ar fi putut fi 
 primul element sau ultimul.

* **algo2.cpp**
   * Implementarea algoritmului MergeSort.

* **algo3.cpp**
   * Implementarea algoritmului HeapSort. In acest algoritm am construit un Heap.

* **Makefile**
  * Acesta contine regulile:
 
    * **build_best**
      - compileaza executabilul care va testa cea mai buna solutie
      pe testele default

    * **build_snd_best**
      - compileaza executabilul care va testa a doua cea mai buna solutie
      pe testele default
   
    * **build_trd_best**
      - compileaza executabilul care va testa a treia cea mai buna solutie
      pe testele default

    * **run**
      - ruleaza testerul pe toate testele care corespund specificatiei
      originale

    * **clean**

* Folder **'in'** cu testele de intrare  (5 teste)
    * Fiecare test este numit "**testID.in**", unde ID reprezintă numărul
    testului (e.g. test0.in)
    * Fiecare test este structurat în felul următor:
      * Pe prima linie, N (int - numărul de elemente din secvență), N <= 10^6
      * N elemente (numere întregi - reprezentabile pe 32 biti)
      
* Folder **'out'** cu testele de ieșire
    * Fiecare test este numit "**testID.out**", unde ID reprezintă numărul
    testului (e.g. test0.out) 
    * Fiecare test conține secvența de elemente din testul de intrare 
    corespunzător sortată ascendent.

* Folder **other_tests.in**
    * Contine teste suplimentare, astfel:
    - test_float1.in si test_float2.in contin elemente de tip float.
   Acestea au fost generate cu programul generator_number_float.cpp.
    - test_string1.in contine siruri de caractere cuprinse intre a-z.
   Acesta a fost generat cu programul generator_string_a_z.cpp.
    - test_string2.in contine siruri de caractere cuprinse intre a-z,
   A-Z, 1-2. Acest test a fost generat cu programul generator_stringAa_Zz.cpp.

* Folder **other_tests.out**
    * Testele sunt test_float1.out, test_float2.out, test_string1.out, 
 test_string2.out.
    * Fiecare test conține secvența de elemente din testul de intrare 
    corespunzător sortată ascendent.

  **main_quicksort.cpp**
   * Implementarea algoritmului QuickSort, avand si functia main folosita 
 pentru citirea elementelor din fisierul in, din linia de comanda prin indirectare,
 si afisarea acestora in fisierul de output.
 Exemplu: ./a.out < ./in/test0.in > ./out/test0.in.
 
  **main_heap.cpp**
   * Implementarea algoritmului HeapSort, avand si functia main folosita pentru
 citirea elementelor din fisierul in, din linia de comanda prin indirectare, si 
 afisarea acestora in fisierul de output.
 Exemplu: ./a.out < ./in/test0.in > ./out/test0.in.

  **merge_main.cpp**
   * Implementarea algoritmului MergeSort, avand si functia main folosita pentru
 citirea elementelor din fisierul in, din linia de comanda prin indirectare, 
 si afisarea acestora in fisierul de output.
 Exemplu: ./a.out < ./in/test0.in > ./out/test0.in.
 
  **tester.cpp**
   * Folosit in citirea elementelor din fisiere si parsarea acestora, avand
 functia principala run_test(const char* input_file, const char* reference_file) 
 in care se apeleaza functia pentru algoritmul dorit. Programul tester.cpp este
 luat din arhiva din fisierul Example.

