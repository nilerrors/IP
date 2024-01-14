def leap_year(year):
    """
    True if leap year
    else False
    
    leap year: 400|year or 4|year and not(100|year)
    
    >>> leap_year(2000)
    True
    >>> leap_year(1800)
    False
    """
    return year % 400 == 0 or year % 4 == 0 and year % 100 != 0


def days_in_month(month, year):
    """
    Returns the total days in a month

    >>> days_in_month(2, 2004)
    29
    >>> days_in_month(2, 1800)
    28
    >>> days_in_month(4, 2018)
    30
    >>> days_in_month(10, 2009)
    31
    """
    if month == 2 and leap_year(year):
        return 29
    elif month == 2:
        return 28
    elif month % 2 == 0 and month < 7 or month % 2 != 0 and month > 7:
        return 30
    return 31


def next_month(m, y):
    """
    returns next month,
    for 12th month returns next year and first month
    >>> next_month(10,2021)
    (11,2021)
    >>> next_month(12,2021)
    (1,2022)
    """
    if m == 12:
        m = 1
        y += 1
    else:
        m += 1
    return m, y



class Date:
    def __init__(self, day, month, year):
        self.day = day
        self.month = month
        self.year = year

    def __str__(self):
        """
        returns date in format:
            dd-mm-yyyy
        """
        return f'{self.day:0>2}-{self.month:0>2}-{self.year:0>4}'

    def comes_before(self, date):
        """
        Returns True if given date comes before
        else False

        >>> d1 = Date(6, 3, 2008)
        >>> d2 = Date(8, 4, 2007)
        >>>
        >>> d1.comes_before(d2)
        True
        >>> d2.comes_before(d1)
        False
        """
        return self.year < date.year or self.month < date.month or self.day < date.day
    
    def add_days(self, n):
        """
        Add n amount of days to the date

        >>> d1 = Date(27, 12, 2023)
        >>> d1.add_days(78)
        None
        >>> print(d1)
        14-03-2024
        """
        for _ in range(n):
            self.day += 1
            if self.day > days_in_month(self.month, self.year):
                self.day = 1
                self.month, self.year = next_month(self.month, self.year)
    
    def get_days_to(self, d):
        """
        Returns how many days difference a given date has

        >>> d1 = Date(11, 10, 2021)
        >>> d2 = Date(12, 10, 2021)
        >>> print(d1.get_days_to(d2))
        1
        >>> print(d2.get_days_to(d1))
        -1
        """
        days = 0
        d_self = Date(self.day, self.month, self.year)
        d_compare = Date(d.day, d.month, d.year)
        while d_self.comes_before(d_compare):
            d_self.add_days(1)
            days += 1
        while d_compare.comes_before(d_self):
            d_compare.add_days(1)
            days -= 1
        return days

