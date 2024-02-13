#!/usr/bin/python3
"""check how many subsribers"""
import requests


def top_ten(subreddit):
    """number of subscribers"""
    url = f'https://www.reddit.com/r/{subreddit}/hot.json?limit=10'
    headers = {'User-Agent': 'MyCustomUserAgent/1.0'}
    response = requests.get(url, headers=headers, allow_redirects=False)
    if response.status_code == 200:
        data = response.json()
        list_of_posts = data['data']['children']
        for post in list_of_posts:
            print(post.get('data').get('title'))
    else:
        print(None)
