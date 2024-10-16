#include <stdio.h>

int main() {
    // Variables to hold the values of Threat, Vulnerability, and Impact
    float threat, vulnerability, impact, risk;

    // Input for Threat
    printf("Enter the Threat level (0 to 1): ");
    scanf("%f", &threat);
    
    // Input for Vulnerability
    printf("Enter the Vulnerability level (0 to 1): ");
    scanf("%f", &vulnerability);
    
    // Input for Impact
    printf("Enter the Impact level (0 to 1): ");
    scanf("%f", &impact);

    // Calculate Risk
    risk = threat * vulnerability * impact;

    // Output the result
    printf("Calculated Risk: %.2f\n", risk);

    return 0;
}
