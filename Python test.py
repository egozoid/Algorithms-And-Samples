#! /usr/bin/python3
import requests
import json


def main():
    url = 'http://api.openweathermap.org/data/2.5/weather'
    parameters = {'q': 'muhammad', 'appid': 'f66e6563cd674cf48787b61885d7ced5'}
    r = requests.get(url, params=parameters)
    j: list = json.loads(r.text)
    weather: list = j['weather'][0]
    weather_id: int = j['weather'][0]['id']
    print(weather)
    print(weather_id)

if __name__ == "__main__":
    main()