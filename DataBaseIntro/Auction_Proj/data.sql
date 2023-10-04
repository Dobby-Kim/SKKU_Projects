-- Users
INSERT INTO users (user_id, password, is_admin) VALUES ('user1', 'p1', false);
INSERT INTO users (user_id, password, is_admin) VALUES ('user2', 'p2', false);
INSERT INTO users (user_id, password, is_admin) VALUES ('user3', 'p3', false);
INSERT INTO users (user_id, password, is_admin) VALUES ('user4', 'p4', false);
INSERT INTO users (user_id, password, is_admin) VALUES ('user5', 'p5', false);

-- Electronics
INSERT INTO items (category, description, condition, seller_id) VALUES ('Electronics', 'Brand new laptop', 'NEW', 'user1');
INSERT INTO items (category, description, condition, seller_id) VALUES ('Electronics', 'Latest smartphone', 'NEW', 'user2');
INSERT INTO items (category, description, condition, seller_id) VALUES ('Electronics', 'Noise-cancelling headphones', 'LIKE_NEW', 'user3');

-- Books
INSERT INTO items (category, description, condition, seller_id) VALUES ('Books', 'Bestselling fiction novel', 'GOOD', 'user4');
INSERT INTO items (category, description, condition, seller_id) VALUES ('Books', 'Introductory science textbook', 'NEW', 'user5');
INSERT INTO items (category, description, condition, seller_id) VALUES ('Books', 'Detailed history book', 'LIKE_NEW', 'user1');

-- Home
INSERT INTO items (category, description, condition, seller_id) VALUES ('Home', 'Comfortable sofa', 'GOOD', 'user2');
INSERT INTO items (category, description, condition, seller_id) VALUES ('Home', 'Wooden dining table', 'NEW', 'user3');
INSERT INTO items (category, description, condition, seller_id) VALUES ('Home', 'Queen-sized bed', 'LIKE_NEW', 'user4');

-- Clothing
INSERT INTO items (category, description, condition, seller_id) VALUES ('Clothing', 'Warm jacket', 'NEW', 'user5');
INSERT INTO items (category, description, condition, seller_id) VALUES ('Clothing', 'Stylish shoes', 'GOOD', 'user1');
INSERT INTO items (category, description, condition, seller_id) VALUES ('Clothing', 'Casual t-shirt', 'LIKE_NEW', 'user2');

-- Sporting Goods
INSERT INTO items (category, description, condition, seller_id) VALUES ('Sporting Goods', 'Football', 'NEW', 'user3');
INSERT INTO items (category, description, condition, seller_id) VALUES ('Sporting Goods', 'Tennis racket', 'GOOD', 'user4');
INSERT INTO items (category, description, condition, seller_id) VALUES ('Sporting Goods', 'Running shoes', 'LIKE_NEW', 'user5');
