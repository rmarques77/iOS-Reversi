//
//  SHCBoard.h
//  SHCReversiGame
//
//  Created by Colin Eberhardt on 27/12/2012.
//  Copyright (c) 2012 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "BoardCellState.h"

/** An 8x8 playing board. */
@interface SHCBoard : NSObject

// gets the state of the cell at the given location
- (BoardCellState) cellStateAtColumn:(NSInteger) column andRow:(NSInteger) row;

// sets the state of the cell at the given location
-	(void) setCellState:(BoardCellState) state forColumn:(NSInteger)column andRow:(NSInteger) row;

// clears the entire board
- (void) clearBoard;

@end
