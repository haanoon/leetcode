import pandas as pd

def market_analysis(users: pd.DataFrame, orders: pd.DataFrame, items: pd.DataFrame) -> pd.DataFrame:

     merge = pd.merge(left=users,right=orders,how='left',left_on="user_id",right_on="buyer_id")
     merge = merge[(merge['order_date'].notna())&(merge['order_date'].dt.year==2019)]
     merge = merge.groupby(['user_id',"join_date"]).size().reset_index(name="orders_in_2019")
     all_users = users[['user_id','join_date']]
     joined = pd.merge(left=all_users,right=merge,how="left",on=['user_id','join_date'])
     joined = joined.rename(columns={"user_id":"buyer_id"})
     joined['orders_in_2019'] = joined['orders_in_2019'].fillna(0).astype(int)
     return joined

