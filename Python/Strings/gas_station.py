# We are implementing a smart GPS software.
# • We are taking a long trip from Sofia to Plovdiv and we know the distance
# between the two cities.It is a positive integer and we mark it as distance.
# • We know how much our car can ride with a full tank of gas. It is a positive
# integer in kilometers. We mark it as tank_size.
# • We have a list of gas stations. We know the distance between Sofia and the
# current gas station. stations = [50, 80, 110, 180, 220, 290] The list is sorted!
# By using this information we will implement a function that returns the
# shortest list of gas stations that we have to visit in order to travel from Sofia to
# Plovdiv. Know that are allways starting with a full tank_size.

def gas_stations(distance, tank_size, stations):

    stations.append(distance)

    visited = []
    current_position = 0

    while current_position < distance:
        next_station = None

        for station in stations:
            if current_position + tank_size >= station:
                next_station = station
            else:
                break  

        if next_station is None:
            print("You won't have enough fuel to complete the road.")
            break

        visited.append(next_station)
        current_position = next_station

    visited.pop()

    return visited

if __name__ == "__main__":
    
    print(gas_stations(320, 90, [50, 80, 140, 180, 220, 290]))
    print(gas_stations(390, 80, [70, 90, 140, 210, 240, 280, 350]))
