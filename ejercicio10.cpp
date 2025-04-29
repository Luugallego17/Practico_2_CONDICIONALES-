int main() {
    int A, B;
    cout << "Introduce los valores de A y B" << endl;
    cin >> A >> B;
    
    if (B == 0) {
        cout << "Impossible" << endl;
    } else {
        cout << A / B << endl;
    }

    return 0;
}