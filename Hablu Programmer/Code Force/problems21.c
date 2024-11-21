



#include <stdio.h>
#include <string.h>
int main() {
    // Number of Test Cases
    int t;
    scanf("%d", &t);
    // Counter to count the number of faces
    int counter = 0;
    for (int i = 0; i < t; i++) {
        char polyhedrons[15];
        scanf("%s", polyhedrons);

        if (strcmp(polyhedrons, "Tetrahedron") == 0) {
            counter += 4;
        } else if (strcmp(polyhedrons, "Cube") == 0) {
            counter += 6;
        } else if (strcmp(polyhedrons, "Octahedron") == 0) {
            counter += 8;
        } else if (strcmp(polyhedrons, "Dodecahedron") == 0) {
            counter += 12;
        } else if (strcmp(polyhedrons, "Icosahedron") == 0) {
            counter += 20;
        }
    }
    // Output
    printf("%d\n", counter);
    return 0;
}
