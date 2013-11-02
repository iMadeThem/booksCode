//
//  OrderEntry.m
//  ARC Orders
//
//  Created by Keith Lee on 11/25/12.
//  Copyright (c) 2012 Keith Lee. All rights reserved.
//

#import "OrderEntry.h"

@implementation OrderEntry

- (id) initWithId:(NSString *)oid
{
  if ((self = [super init]))
  {
    NSLog(@"Initializing OrderEntry object");
    orderId = oid;
    item = [[OrderItem alloc] initWithName:@"Doodle"];
    shippingAddress = [[Address alloc] init];
  }
  
  return self;
}

- (void)dealloc
{
  NSLog(@"Deallocating OrderEntry object with ID %@", orderId);
}

@end
