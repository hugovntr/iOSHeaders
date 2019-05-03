import Vue from 'vue';
import Vuex from 'vuex';
import axios, { AxiosResponse } from 'axios';

Vue.use(Vuex);


export default new Vuex.Store({
	state: {
		headers: Array
	},
	mutations: {
		SET_HEADERS: (state, payload) => {
			state.headers = payload
		}
	},
	actions: {
		async initStore({ commit }) {
			const res: AxiosResponse = await axios.get(`${process.env.VUE_APP_API_URL}headers/headers.json`)
			commit('SET_HEADERS', res.data)
		}
	},
});
