#include <iostream>
#include "Contributor.h"
#include "Contribution.h"

using namespace std;

int main() {
    Contribution::setPercent(10);
    Contributor contributor(500);
    contributor.openContribution(10);
    cout << contributor.getEndBalance();
}