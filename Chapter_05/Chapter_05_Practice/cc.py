def sum_of_natural_numbers(n):
    # বেস কেস: যখন n 1 হবে, তখন ফাংশন 1 রিটার্ন করবে।
    if n == 1:
        return 1
    else:
        # পুনরাবৃত্তি: বর্তমান n এবং n-1 পর্যন্ত যোগফল
        return n + sum_of_natural_numbers(n - 1)

# উদাহরণস্বরূপ, প্রথম 5 প্রাকৃতিক সংখ্যার যোগফল:
n = 5
result = sum_of_natural_numbers(n)
print(f"প্রথম {n} প্রাকৃতিক সংখ্যার যোগফল: {result}")
