favorite_movies = []

while True:
    movie = input("Enter your favorite movie (type 'stop' to end): ")
    if movie.lower() == 'stop':
        break
    favorite_movies.append(movie)

print("\nList of favorite movies:")
for movie in favorite_movies:
    print(movie)
