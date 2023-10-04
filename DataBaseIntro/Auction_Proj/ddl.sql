CREATE TABLE users (
    user_id VARCHAR(255) PRIMARY KEY,
    password VARCHAR(255) NOT NULL,
    is_admin BOOLEAN DEFAULT FALSE
);

-- Item table
CREATE TABLE items (
    item_id SERIAL PRIMARY KEY,
    category VARCHAR(255) NOT NULL,
    description TEXT,
    condition VARCHAR(50) CHECK (condition IN ('NEW', 'LIKE_NEW', 'GOOD', 'ACCEPTABLE')),
    seller_id TEXT REFERENCES users(user_id),
    buy_it_now_price FLOAT,
    date_posted TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    status VARCHAR(50) DEFAULT 'active'
);

-- Bid table
CREATE TABLE bids (
    bid_id SERIAL PRIMARY KEY,
    item_id INT REFERENCES items(item_id),
    bid_price FLOAT NOT NULL,
    bidder TEXT REFERENCES users(user_id),
    date_posted TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    bid_closing_date TIMESTAMP
);

-- Billing table
CREATE TABLE billing (
    billing_id SERIAL PRIMARY KEY,
    sold_item_id INT REFERENCES items(item_id),
    purchase_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    seller_id TEXT REFERENCES users(user_id),
    buyer_id TEXT REFERENCES users(user_id),
    amount_due FLOAT,
    amount_paid FLOAT
);