with open("students.txt", "r") as f:
    student_malumotlari = []
    for line in f:
        values = line.strip().split(", ")
        ism = values[0]
        yosh = int(values[1])
        baholar = list(map(int, values[2:]))
        student_malumotlari.append((ism, yosh, *baholar))

def func(student):
    ism = student[0]
    ball = student[2:]
    ortacha_ball = sum(ball) / len(ball)
    return (ism, ortacha_ball)

natija = list(map(func, student_malumotlari))
ortacha = list(filter(lambda x: x[1] > 70, natija))

with open("high_achievers.txt", "w") as file:
    for student in ortacha:
        file.write(f"{student[0]}, {student[1]}\n")

