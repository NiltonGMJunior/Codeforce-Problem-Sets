#   Codeforces
#   #785A   -   Anton and Polyhedrons
#   http://codeforces.com/problemset/problem/785/A
#   12/01/2019
#   Nilton G. M. Junior


if __name__ == '__main__':
    faces_poly = {"Tetrahedron": 4, "Cube": 6, "Octahedron": 8, "Dodecahedron": 12, "Icosahedron": 20}
    total_faces = 0
    num_poly = int(input())
    for _ in range(num_poly):
        poly = input()
        total_faces += faces_poly[poly]
    print(total_faces)
