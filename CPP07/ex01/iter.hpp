

#pragma once


namespace Iter {


	template <typename A, typename L, typename F>
		void	iter(A &array, L len, F func ){
		
			for(L i = 0; i < len; i++){
			
				func(array[i]);
			}
		};
};
