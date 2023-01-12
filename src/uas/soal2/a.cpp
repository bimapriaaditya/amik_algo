int Tugas2()
{
    int grade = 80;
    int age = 25;

    if (grade >= 60) {
        printf("Passed the exam\n");
        if (age > 21) {
            printf("Eligible for advanced level\n");
            int level;
            printf("Choose your level (1 - 3) : ");
            scanf("%d", &level);

            switch (level) {
                case 1:
                    printf("Advanced level 1\n");
                    break;
                case 2:
                    printf("Advanced level 2\n");
                    break;
                case 3:
                    printf("Advanced level 3\n");
                    break;
                default:
                    printf("Invalid level\n");
                    break;
            }
        } else {
            printf("You are still to young\n");
        }
    } else {
        printf("Failed the exam\n");
    }

    return 0;
}