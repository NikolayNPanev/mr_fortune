What programming language?
the one and only, my beloved, c++

How to store data?
 - Locally or database?
    - Locally (for now)

Where to store user files?
- in /var/lib/$(APP_NAME)/*
    - data        
- data root dir is var/lib/$(APP_NAME)/

File Source Code Structure?
 - Project
    - package
        - bin
        - src
    - documentation
        - development
        - usage

Build system?
 - gnu make
 - maybe bazel instead, but probably not

Platform support
 - Linux

abstracts classes:
- store_data
    - input variables
        - location (where in the data root dir) 
        - filename (.csv)
        - data (already parsed to .csv)


classes:
- user
    - fields
        - name (string)
        - assets (double) (your mooneys)
        - revenue (map)
            - key (id) (int)
            - revenue (struct)
                - revenue message (string)
                - value (double)
    - constructor
        - required fields
            - name
        - optional
            - assets
            - revenue
        - defaults
            - revenue = empty map
            - assets = 0
    - methods
        - getters and setters for everything
        - modify_assets
            - variables
                - value
                - operand (enum)
                    - ADD
                    - SUB
        - add_revenue
            - modify_assets
            - revenue message

        - subtract_revenue
            - modify_assets
            - revenue message

